// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Grill_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Grill.Grill_C.UserConstructionScript
// ()

void AGrill_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grill.Grill_C.UserConstructionScript");

	AGrill_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grill.Grill_C.ExecuteUbergraph_Grill
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGrill_C::ExecuteUbergraph_Grill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grill.Grill_C.ExecuteUbergraph_Grill");

	AGrill_C_ExecuteUbergraph_Grill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
