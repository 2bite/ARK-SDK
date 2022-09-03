// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gen2_AreaBuff_Gardens_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gen2_AreaBuff_Gardens.Gen2_AreaBuff_Gardens_C.UserConstructionScript
// ()

void AGen2_AreaBuff_Gardens_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Gardens.Gen2_AreaBuff_Gardens_C.UserConstructionScript");

	AGen2_AreaBuff_Gardens_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Gardens.Gen2_AreaBuff_Gardens_C.ReceiveBeginPlay
// ()

void AGen2_AreaBuff_Gardens_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Gardens.Gen2_AreaBuff_Gardens_C.ReceiveBeginPlay");

	AGen2_AreaBuff_Gardens_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Gardens.Gen2_AreaBuff_Gardens_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Gardens_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Gardens.Gen2_AreaBuff_Gardens_C.BPDeactivated");

	AGen2_AreaBuff_Gardens_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Gardens.Gen2_AreaBuff_Gardens_C.ExecuteUbergraph_Gen2_AreaBuff_Gardens
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Gardens_C::ExecuteUbergraph_Gen2_AreaBuff_Gardens(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Gardens.Gen2_AreaBuff_Gardens_C.ExecuteUbergraph_Gen2_AreaBuff_Gardens");

	AGen2_AreaBuff_Gardens_C_ExecuteUbergraph_Gen2_AreaBuff_Gardens_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
