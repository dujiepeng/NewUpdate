# NewUpdate
改动：
1、Connection状态的枚举
2、groupStyle的枚举
3、ChatSendHelper
4、EMBuddy  relationShip  followState
5、没有拒绝群组邀请的接口（已添加）
6、conversationType
7、messageModel  （更新消息ext 播放语音文件 messageBody）
8、didReceiveMessageId这个回调  没有了
9、loadMessage的方式
10、groupStyle
11、语音播放的errorCode(没有初始化)

Questions：
1、发图片不显示缩略图  消息的位置不正确   进入群组详情界面崩溃。
2、回调不执行
3、group.maxUserCount（进入群组详情页面crash，注掉群人数那一行cell就好了） ，群详情获取不到。 
4、聊天页面下拉刷新再获取的时候，不太对。
5、好友列表获取不到
6、未读消息数不能及时刷新
