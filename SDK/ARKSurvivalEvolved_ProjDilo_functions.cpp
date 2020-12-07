// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjDilo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjDilo.ProjDilo_C.UserConstructionScript
// ()

void AProjDilo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDilo.ProjDilo_C.UserConstructionScript");

	AProjDilo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjDilo.ProjDilo_C.ExecuteUbergraph_ProjDilo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjDilo_C::ExecuteUbergraph_ProjDilo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDilo.ProjDilo_C.ExecuteUbergraph_ProjDilo");

	AProjDilo_C_ExecuteUbergraph_ProjDilo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
