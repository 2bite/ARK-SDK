// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gigant_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gigant_Character_BP.Gigant_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void AGigant_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gigant_Character_BP.Gigant_Character_BP_C.BPNotifyClearRider");

	AGigant_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gigant_Character_BP.Gigant_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void AGigant_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gigant_Character_BP.Gigant_Character_BP_C.BPNotifySetRider");

	AGigant_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gigant_Character_BP.Gigant_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AGigant_Character_BP_C::GetSocketForMeleeTraceForHitBlockers(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gigant_Character_BP.Gigant_Character_BP_C.GetSocketForMeleeTraceForHitBlockers");

	AGigant_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gigant_Character_BP.Gigant_Character_BP_C.UserConstructionScript
// ()

void AGigant_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gigant_Character_BP.Gigant_Character_BP_C.UserConstructionScript");

	AGigant_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gigant_Character_BP.Gigant_Character_BP_C.ExecuteUbergraph_Gigant_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGigant_Character_BP_C::ExecuteUbergraph_Gigant_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gigant_Character_BP.Gigant_Character_BP_C.ExecuteUbergraph_Gigant_Character_BP");

	AGigant_Character_BP_C_ExecuteUbergraph_Gigant_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
