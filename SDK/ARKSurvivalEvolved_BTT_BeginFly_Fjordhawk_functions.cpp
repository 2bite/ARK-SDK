// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTT_BeginFly_Fjordhawk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_BeginFly_Fjordhawk.BTT_BeginFly_Fjordhawk_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_BeginFly_Fjordhawk_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_BeginFly_Fjordhawk.BTT_BeginFly_Fjordhawk_C.ReceiveExecute");

	UBTT_BeginFly_Fjordhawk_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_BeginFly_Fjordhawk.BTT_BeginFly_Fjordhawk_C.ExecuteUbergraph_BTT_BeginFly_Fjordhawk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_BeginFly_Fjordhawk_C::ExecuteUbergraph_BTT_BeginFly_Fjordhawk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_BeginFly_Fjordhawk.BTT_BeginFly_Fjordhawk_C.ExecuteUbergraph_BTT_BeginFly_Fjordhawk");

	UBTT_BeginFly_Fjordhawk_C_ExecuteUbergraph_BTT_BeginFly_Fjordhawk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
