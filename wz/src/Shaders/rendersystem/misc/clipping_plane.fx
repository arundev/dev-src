//*************************************************************************************************
// ����:	��Ⱦ��Զ�ü���(û�õ�)
//---------------------------------------------------------
// ����:		
// ����:		2012-11-08
// ����޸�:
//*************************************************************************************************
#include "../common.h"

//---------------------------------------------------------------------------------------
// �������
//---------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------
// ��������������
//---------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------
// ������ɫ������������
//---------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------
// ������ɫ�����������
//---------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------
// ������ɫ��
//---------------------------------------------------------------------------------------
//
//---------------------------------------------------------------------------------------
float4	VS_Main_FarClippingPlane(float3 vPos : POSITION)	: POSITION
{
	return float4(vPos.xy, 1.f, 1.f);
}
//---------------------------------------------------------------------------------------
float4	VS_Main_NearClippingPlane(float3 vPos : POSITION)	: POSITION
{
	return float4(vPos.xy, 0.f, 1.f);
}

//---------------------------------------------------------------------------------------
// ������ɫ��
//---------------------------------------------------------------------------------------
float4 	PS_Main() : COLOR0
{
	return 0;
}

//---------------------------------------------------------------------------------------
// ��ɫ����
//---------------------------------------------------------------------------------------
//
//---------------------------------------------------------------------------------------
technique Misc_FarClippingPlane
<
	string	Description 		= "Misc_FarClippingPlane";
	bool	UsesNiRenderState 	= false;
	bool	UsesNiLightState	= false;
>
{
	pass P0
	{
		VertexShader	= compile 	vs_2_0	VS_Main_FarClippingPlane();
		PixelShader		= compile	ps_2_0 	PS_Main();
	}
}
//---------------------------------------------------------------------------------------
technique Misc_NearClippingPlane
<
	string	Description 		= "Misc_NearClippingPlane";
	bool	UsesNiRenderState 	= false;
	bool	UsesNiLightState	= false;
>
{
	pass P0
	{
		VertexShader	= compile 	vs_2_0	VS_Main_NearClippingPlane();
		PixelShader		= compile	ps_2_0 	PS_Main();
	}
}
//---------------------------------------------------------------------------------------