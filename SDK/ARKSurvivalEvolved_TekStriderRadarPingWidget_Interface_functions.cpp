// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekStriderRadarPingWidget_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekStriderRadarPingWidget_Interface.TekStriderRadarPingWidget_Interface_C.GetHudData
// ()
// Parameters:
// struct FVector                 PingWorldLocation              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ProgressBarValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            BaseColor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RingScale                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Visibility                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTekStriderRadarPingWidget_Interface_C::GetHudData(struct FVector* PingWorldLocation, float* ProgressBarValue, struct FLinearColor* BaseColor, float* RingScale, float* Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekStriderRadarPingWidget_Interface.TekStriderRadarPingWidget_Interface_C.GetHudData");

	UTekStriderRadarPingWidget_Interface_C_GetHudData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PingWorldLocation != nullptr)
		*PingWorldLocation = params.PingWorldLocation;
	if (ProgressBarValue != nullptr)
		*ProgressBarValue = params.ProgressBarValue;
	if (BaseColor != nullptr)
		*BaseColor = params.BaseColor;
	if (RingScale != nullptr)
		*RingScale = params.RingScale;
	if (Visibility != nullptr)
		*Visibility = params.Visibility;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
