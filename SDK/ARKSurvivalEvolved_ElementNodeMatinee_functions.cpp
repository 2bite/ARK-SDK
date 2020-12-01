// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElementNodeMatinee_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElementNodeMatinee.ElementNodeMatinee_C.UserConstructionScript
// ()

void AElementNodeMatinee_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNodeMatinee.ElementNodeMatinee_C.UserConstructionScript");

	AElementNodeMatinee_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementNodeMatinee.ElementNodeMatinee_C.ExecuteUbergraph_ElementNodeMatinee
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElementNodeMatinee_C::ExecuteUbergraph_ElementNodeMatinee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNodeMatinee.ElementNodeMatinee_C.ExecuteUbergraph_ElementNodeMatinee");

	AElementNodeMatinee_C_ExecuteUbergraph_ElementNodeMatinee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
