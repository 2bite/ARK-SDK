// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SummonerIsDodging_DK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SummonerIsDodging_DK.SummonerIsDodging_DK_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void USummonerIsDodging_DK_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SummonerIsDodging_DK.SummonerIsDodging_DK_C.ReceiveConditionCheck");

	USummonerIsDodging_DK_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SummonerIsDodging_DK.SummonerIsDodging_DK_C.ExecuteUbergraph_SummonerIsDodging_DK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USummonerIsDodging_DK_C::ExecuteUbergraph_SummonerIsDodging_DK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SummonerIsDodging_DK.SummonerIsDodging_DK_C.ExecuteUbergraph_SummonerIsDodging_DK");

	USummonerIsDodging_DK_C_ExecuteUbergraph_SummonerIsDodging_DK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
