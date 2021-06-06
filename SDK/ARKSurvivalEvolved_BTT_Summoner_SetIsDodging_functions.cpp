// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTT_Summoner_SetIsDodging_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_Summoner_SetIsDodging.BTT_Summoner_SetIsDodging_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_Summoner_SetIsDodging_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_Summoner_SetIsDodging.BTT_Summoner_SetIsDodging_C.ReceiveExecute");

	UBTT_Summoner_SetIsDodging_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_Summoner_SetIsDodging.BTT_Summoner_SetIsDodging_C.ExecuteUbergraph_BTT_Summoner_SetIsDodging
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_Summoner_SetIsDodging_C::ExecuteUbergraph_BTT_Summoner_SetIsDodging(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_Summoner_SetIsDodging.BTT_Summoner_SetIsDodging_C.ExecuteUbergraph_BTT_Summoner_SetIsDodging");

	UBTT_Summoner_SetIsDodging_C_ExecuteUbergraph_BTT_Summoner_SetIsDodging_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
