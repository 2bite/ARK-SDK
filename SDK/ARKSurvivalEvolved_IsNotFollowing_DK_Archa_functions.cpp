// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsNotFollowing_DK_Archa_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IsNotFollowing_DK_Archa.IsNotFollowing_DK_Archa_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsNotFollowing_DK_Archa_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsNotFollowing_DK_Archa.IsNotFollowing_DK_Archa_C.ReceiveConditionCheck");

	UIsNotFollowing_DK_Archa_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IsNotFollowing_DK_Archa.IsNotFollowing_DK_Archa_C.ExecuteUbergraph_IsNotFollowing_DK_Archa
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsNotFollowing_DK_Archa_C::ExecuteUbergraph_IsNotFollowing_DK_Archa(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsNotFollowing_DK_Archa.IsNotFollowing_DK_Archa_C.ExecuteUbergraph_IsNotFollowing_DK_Archa");

	UIsNotFollowing_DK_Archa_C_ExecuteUbergraph_IsNotFollowing_DK_Archa_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
