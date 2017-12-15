#!/usr/bin/python
## -*- coding: UTF-8 -*-

import sys
import requests
import time

def make_md5(src):
    import hashlib
    m2 = hashlib.md5()
    m2.update(src)
    return m2.hexdigest()

url = 'http://172.16.40.68:9002/cgi-bin/admin'

# 发送请求
def SendHttpRequest(params):
    before_md5 = ''.join([k + params[k] for k in sorted(params.keys()) if k is not 'sign']) + "1234567890987654321"
    params['sign'] = make_md5(before_md5)
    result = requests.get(url, params=params)
    print(result.status_code, result.text)
    return result

# 创建工会
def create_team():
    params = {
        'msg': 'create',
        'createrId':'123456781',
        'createrName':'wang1',
        'teamName':'test104',
        'cards':'1000',
        'sign': 'md5str'
    }
    SendHttpRequest(params)

# 用来测试，创建很多个工会
def create_more_team():
    count = 1
    createrId = 147258369
    while count<10:
        count = count + 1
        params = {
            'msg': 'create',
            'createrId':str(createrId + count),
            'createrName':'tn' + str(count),
            'teamName':'team'+ str(count),
			'cards':'1000',
            'winerLimitScore':'10',
            'perDayCardLimit':'100',
            'totalCardLimit':'1000',
            'sign': 'md5str'
        }
        SendHttpRequest(params)
# 会长操作工会成员
def mem_opt():
    params = {
        'msg': 'memopt',
        'createrId':'123456789',
        'teamId':'131',
        'memId':'118042',
        'opt':'1',
        'sign': 'md5str'
    }
    SendHttpRequest(params)


# 给工会添加卡
def add_card():
    params = {
        'msg': 'addcard',
        'teamID':'11187081',
        'cards':'1000',
        'sign': 'md5str'
    }
    SendHttpRequest(params)

# 直接添加成员
def add_mem():
    params = {
        'msg': 'inviteuser',
        'createrId':'591583596',
        'teamID':'101',
        'userID':'2000075318',
        'sign': 'md5str'
    }
    SendHttpRequest(params)

# 设置房卡最低报警值
def set_card_alert():
    params = {
        'msg': 'cardalert',
        'createrId':'147258369',
        'teamID':'11187081',
        'alert':'300',
        'sign': 'md5str'
    }
    SendHttpRequest(params)

# 标记牌局日志 是否已阅
def log_flag():
    params = {
        'msg': 'marklog',
        'teamID':'11187081',
        'id':'111111',
        'sign': 'md5str'
    }
    SendHttpRequest(params)

# 删除工会
def del_team():
    params = {
        'msg': 'delteam',
        'createrId':'109353',
        'teamID':'139',
        'sign': 'md5str'
    }
    SendHttpRequest(params)

# 代理获取自己已经创建的工会列表,返回所有创建工会列表，及当前剩余的房卡数量
def query_all_team():
    params = {
        'msg': 'queryall',
        'createrId':'147258369',
        'sign': 'md5str'
    }
    SendHttpRequest(params)

#查询指定工会的信息
def query_team():
    params = {
        'msg': 'queryteam',
        'createrId':'147258369',
        'teamID':'11187081',
        'sign': 'md5str'
    }
    SendHttpRequest(params)

#设置成员每天和最大使用房卡的数量
def set_per_day_limit():
    params = {
        'msg': 'perdaylimit',
        'createrId':'147258369',
        'teamID':'11187081',
        'limit':'100',
        'sign': 'md5str'
    }
    SendHttpRequest(params)

############################################
#

if len(sys.argv) != 2:
    print("param is error")
    exit()

if sys.argv[1] == "create":
    create_team()
elif sys.argv[1] == "create_more":
    create_more_team()
elif sys.argv[1] == "memopt":
    mem_opt()
elif sys.argv[1] == "addcard":
    add_card()
elif sys.argv[1] == "addmem":
    add_mem()
elif sys.argv[1] == "delteam":
    del_team()
else:
    print("unknow param")
