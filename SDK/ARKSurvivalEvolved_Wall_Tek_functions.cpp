// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wall_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Wall_Tek.Wall_Tek_C.UserConstructionScript
// ()

void AWall_Tek_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wall_Tek.Wall_Tek_C.UserConstructionScript");

	AWall_Tek_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wall_Tek.Wall_Tek_C.ExecuteUbergraph_Wall_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWall_Tek_C::ExecuteUbergraph_Wall_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wall_Tek.Wall_Tek_C.ExecuteUbergraph_Wall_Tek");

	AWall_Tek_C_ExecuteUbergraph_Wall_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
