// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Base.Buff_Base_C.UserConstructionScript
// ()

void ABuff_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base.Buff_Base_C.UserConstructionScript");

	ABuff_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Base.Buff_Base_C.ExecuteUbergraph_Buff_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Base_C::ExecuteUbergraph_Buff_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base.Buff_Base_C.ExecuteUbergraph_Buff_Base");

	ABuff_Base_C_ExecuteUbergraph_Buff_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
