// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTT_Fjordhawk_FindLoot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_Fjordhawk_FindLoot.BTT_Fjordhawk_FindLoot_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_Fjordhawk_FindLoot_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_Fjordhawk_FindLoot.BTT_Fjordhawk_FindLoot_C.ReceiveExecute");

	UBTT_Fjordhawk_FindLoot_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_Fjordhawk_FindLoot.BTT_Fjordhawk_FindLoot_C.ExecuteUbergraph_BTT_Fjordhawk_FindLoot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_Fjordhawk_FindLoot_C::ExecuteUbergraph_BTT_Fjordhawk_FindLoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_Fjordhawk_FindLoot.BTT_Fjordhawk_FindLoot_C.ExecuteUbergraph_BTT_Fjordhawk_FindLoot");

	UBTT_Fjordhawk_FindLoot_C_ExecuteUbergraph_BTT_Fjordhawk_FindLoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
