// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_KK_ElementNodeMatinee_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KK_ElementNodeMatinee.KK_ElementNodeMatinee_C.UserConstructionScript
// ()

void AKK_ElementNodeMatinee_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function KK_ElementNodeMatinee.KK_ElementNodeMatinee_C.UserConstructionScript");

	AKK_ElementNodeMatinee_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KK_ElementNodeMatinee.KK_ElementNodeMatinee_C.ExecuteUbergraph_KK_ElementNodeMatinee
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AKK_ElementNodeMatinee_C::ExecuteUbergraph_KK_ElementNodeMatinee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KK_ElementNodeMatinee.KK_ElementNodeMatinee_C.ExecuteUbergraph_KK_ElementNodeMatinee");

	AKK_ElementNodeMatinee_C_ExecuteUbergraph_KK_ElementNodeMatinee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
