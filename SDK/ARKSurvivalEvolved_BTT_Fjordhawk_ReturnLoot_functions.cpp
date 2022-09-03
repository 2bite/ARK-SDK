// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTT_Fjordhawk_ReturnLoot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_Fjordhawk_ReturnLoot.BTT_Fjordhawk_ReturnLoot_C.GetHorizontalDistance
// ()
// Parameters:
// class AActor*                  Actor1                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor2                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTT_Fjordhawk_ReturnLoot_C::GetHorizontalDistance(class AActor* Actor1, class AActor* Actor2, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_Fjordhawk_ReturnLoot.BTT_Fjordhawk_ReturnLoot_C.GetHorizontalDistance");

	UBTT_Fjordhawk_ReturnLoot_C_GetHorizontalDistance_Params params;
	params.Actor1 = Actor1;
	params.Actor2 = Actor2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BTT_Fjordhawk_ReturnLoot.BTT_Fjordhawk_ReturnLoot_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_Fjordhawk_ReturnLoot_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_Fjordhawk_ReturnLoot.BTT_Fjordhawk_ReturnLoot_C.ReceiveExecute");

	UBTT_Fjordhawk_ReturnLoot_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_Fjordhawk_ReturnLoot.BTT_Fjordhawk_ReturnLoot_C.ExecuteUbergraph_BTT_Fjordhawk_ReturnLoot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_Fjordhawk_ReturnLoot_C::ExecuteUbergraph_BTT_Fjordhawk_ReturnLoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_Fjordhawk_ReturnLoot.BTT_Fjordhawk_ReturnLoot_C.ExecuteUbergraph_BTT_Fjordhawk_ReturnLoot");

	UBTT_Fjordhawk_ReturnLoot_C_ExecuteUbergraph_BTT_Fjordhawk_ReturnLoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
