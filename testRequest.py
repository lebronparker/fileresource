# 删除工会
def del_team():
    params = {
        'msg': 'delteam',
        'createrId':'109353',
        'teamID':'139',
        'sign': 'md5str'
    }
    SendHttpRequest(params)

del_team()