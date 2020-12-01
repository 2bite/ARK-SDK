// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Beer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Beer.Buff_Beer_C.UserConstructionScript
// ()

void ABuff_Beer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Beer.Buff_Beer_C.UserConstructionScript");

	ABuff_Beer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Beer.Buff_Beer_C.ExecuteUbergraph_Buff_Beer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Beer_C::ExecuteUbergraph_Buff_Beer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Beer.Buff_Beer_C.ExecuteUbergraph_Buff_Beer");

	ABuff_Beer_C_ExecuteUbergraph_Buff_Beer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
