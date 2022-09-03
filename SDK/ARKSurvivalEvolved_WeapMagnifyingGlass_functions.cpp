// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMagnifyingGlass_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapMagnifyingGlass.WeapMagnifyingGlass_C.UserConstructionScript
// ()

void AWeapMagnifyingGlass_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMagnifyingGlass.WeapMagnifyingGlass_C.UserConstructionScript");

	AWeapMagnifyingGlass_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMagnifyingGlass.WeapMagnifyingGlass_C.ExecuteUbergraph_WeapMagnifyingGlass
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMagnifyingGlass_C::ExecuteUbergraph_WeapMagnifyingGlass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMagnifyingGlass.WeapMagnifyingGlass_C.ExecuteUbergraph_WeapMagnifyingGlass");

	AWeapMagnifyingGlass_C_ExecuteUbergraph_WeapMagnifyingGlass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
