# FOHEART_UE4_Plugin_Demo
Official Unreal Engine 4 Plugin Demo for FOHEART C1 Motion Capture Suits

<div align=center>
<img src="https://raw.githubusercontent.com/FOHEART/FOHEART_UE4_Plugin_Demo/master/help/img/softwareName.png"/>
</div>

<div align=center>
<img src="https://raw.githubusercontent.com/FOHEART/FOHEART_UE4_Plugin_Demo/master/help/img/unrealBP.png"/>
</div>

# 前言
本手册介绍如何使用FOHEART C1驱动虚拟人物运动，在这里我们使用蓝图实现。<br>
该项目的主分支为兼容Unreal引擎的最新稳定版，其它分支为较低版本的最后一个稳定版本。
# 一、下载并打开工程

<div align=center>
<img src="https://raw.githubusercontent.com/FOHEART/FOHEART_UE4_Plugin_Demo/master/help/img/selectmap.png"/>
</div>

选择内容文件夹里的DemoMap，双击并打开。

<div align=center>
<img src="https://raw.githubusercontent.com/FOHEART/FOHEART_UE4_Plugin_Demo/master/help/img/opened.png"/>
</div>

# 二、配置
单击视图中的BP_FOHEARTNetworkManager，查看Host Name、Port等参数配置是否与MotionVenus中保持一致。

<div align=center>
<img src="https://raw.githubusercontent.com/FOHEART/FOHEART_UE4_Plugin_Demo/master/help/img/hostnameport.png"/>
</div>

----------

<div align=center>
<img src="https://raw.githubusercontent.com/FOHEART/FOHEART_UE4_Plugin_Demo/master/help/img/ipportmv.png"/>
</div>

----------

<div align=center>
<img src="https://raw.githubusercontent.com/FOHEART/FOHEART_UE4_Plugin_Demo/master/help/img/rulemv.png"/>
</div>

单击视图中的HeroTPPBlueprint2，查看其ActorName是否与MotionVenus中保持一致。

<div align=center>
<img src="https://raw.githubusercontent.com/FOHEART/FOHEART_UE4_Plugin_Demo/master/help/img/actornameue.png"/>
</div>

----------

<div align=center>
<img src="https://raw.githubusercontent.com/FOHEART/FOHEART_UE4_Plugin_Demo/master/help/img/actornamemv.png"/>
</div>

# 三、完成
点击开始运行，即可看到场景中人物与MotionVenus中人物运动保持一致了。