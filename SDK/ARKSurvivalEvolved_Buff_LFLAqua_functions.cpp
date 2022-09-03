// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_LFLAqua_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_LFLAqua.Buff_LFLAqua_C.ActivateAquaBuff
// ()

void ABuff_LFLAqua_C::ActivateAquaBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LFLAqua.Buff_LFLAqua_C.ActivateAquaBuff");

	ABuff_LFLAqua_C_ActivateAquaBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LFLAqua.Buff_LFLAqua_C.DeactivateAquaBuff
// ()

void ABuff_LFLAqua_C::DeactivateAquaBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LFLAqua.Buff_LFLAqua_C.DeactivateAquaBuff");

	ABuff_LFLAqua_C_DeactivateAquaBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LFLAqua.Buff_LFLAqua_C.UserConstructionScript
// ()

void ABuff_LFLAqua_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LFLAqua.Buff_LFLAqua_C.UserConstructionScript");

	ABuff_LFLAqua_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LFLAqua.Buff_LFLAqua_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_LFLAqua_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LFLAqua.Buff_LFLAqua_C.BPDeactivated");

	ABuff_LFLAqua_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LFLAqua.Buff_LFLAqua_C.ReceiveBeginPlay
// ()

void ABuff_LFLAqua_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LFLAqua.Buff_LFLAqua_C.ReceiveBeginPlay");

	ABuff_LFLAqua_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LFLAqua.Buff_LFLAqua_C.ExecuteUbergraph_Buff_LFLAqua
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_LFLAqua_C::ExecuteUbergraph_Buff_LFLAqua(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LFLAqua.Buff_LFLAqua_C.ExecuteUbergraph_Buff_LFLAqua");

	ABuff_LFLAqua_C_ExecuteUbergraph_Buff_LFLAqua_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
