// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ArgentRegen_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ArgentRegen.Buff_ArgentRegen_C.UserConstructionScript
// ()

void ABuff_ArgentRegen_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ArgentRegen.Buff_ArgentRegen_C.UserConstructionScript");

	ABuff_ArgentRegen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ArgentRegen.Buff_ArgentRegen_C.ExecuteUbergraph_Buff_ArgentRegen
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ArgentRegen_C::ExecuteUbergraph_Buff_ArgentRegen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ArgentRegen.Buff_ArgentRegen_C.ExecuteUbergraph_Buff_ArgentRegen");

	ABuff_ArgentRegen_C_ExecuteUbergraph_Buff_ArgentRegen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
