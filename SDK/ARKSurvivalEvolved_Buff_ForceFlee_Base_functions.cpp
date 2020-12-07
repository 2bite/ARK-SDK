// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ForceFlee_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.Restore Flee State
// ()

void ABuff_ForceFlee_Base_C::Restore_Flee_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.Restore Flee State");

	ABuff_ForceFlee_Base_C_Restore_Flee_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.Set Flee State
// ()

void ABuff_ForceFlee_Base_C::Set_Flee_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.Set Flee State");

	ABuff_ForceFlee_Base_C_Set_Flee_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ForceFlee_Base_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.BPDeactivated");

	ABuff_ForceFlee_Base_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ForceFlee_Base_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.BPActivated");

	ABuff_ForceFlee_Base_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.UserConstructionScript
// ()

void ABuff_ForceFlee_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.UserConstructionScript");

	ABuff_ForceFlee_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.ExecuteUbergraph_Buff_ForceFlee_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ForceFlee_Base_C::ExecuteUbergraph_Buff_ForceFlee_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.ExecuteUbergraph_Buff_ForceFlee_Base");

	ABuff_ForceFlee_Base_C_ExecuteUbergraph_Buff_ForceFlee_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
