// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBossNavigation_TargetPoint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndBossNavigation_TargetPoint.EndBossNavigation_TargetPoint_C.CanAccessFromPoint
// ()
// Parameters:
// class AActor*                  fromPoint                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canAccessFrom                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEndBossNavigation_TargetPoint_C::CanAccessFromPoint(class AActor* fromPoint, bool* canAccessFrom)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossNavigation_TargetPoint.EndBossNavigation_TargetPoint_C.CanAccessFromPoint");

	AEndBossNavigation_TargetPoint_C_CanAccessFromPoint_Params params;
	params.fromPoint = fromPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canAccessFrom != nullptr)
		*canAccessFrom = params.canAccessFrom;
}


// Function EndBossNavigation_TargetPoint.EndBossNavigation_TargetPoint_C.UserConstructionScript
// ()

void AEndBossNavigation_TargetPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossNavigation_TargetPoint.EndBossNavigation_TargetPoint_C.UserConstructionScript");

	AEndBossNavigation_TargetPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossNavigation_TargetPoint.EndBossNavigation_TargetPoint_C.ExecuteUbergraph_EndBossNavigation_TargetPoint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndBossNavigation_TargetPoint_C::ExecuteUbergraph_EndBossNavigation_TargetPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossNavigation_TargetPoint.EndBossNavigation_TargetPoint_C.ExecuteUbergraph_EndBossNavigation_TargetPoint");

	AEndBossNavigation_TargetPoint_C_ExecuteUbergraph_EndBossNavigation_TargetPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
