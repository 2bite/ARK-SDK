// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSpear_Carrot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapSpear_Carrot.WeapSpear_Carrot_C.UserConstructionScript
// ()

void AWeapSpear_Carrot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSpear_Carrot.WeapSpear_Carrot_C.UserConstructionScript");

	AWeapSpear_Carrot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSpear_Carrot.WeapSpear_Carrot_C.ExecuteUbergraph_WeapSpear_Carrot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapSpear_Carrot_C::ExecuteUbergraph_WeapSpear_Carrot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSpear_Carrot.WeapSpear_Carrot_C.ExecuteUbergraph_WeapSpear_Carrot");

	AWeapSpear_Carrot_C_ExecuteUbergraph_WeapSpear_Carrot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
