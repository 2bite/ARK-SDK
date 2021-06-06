// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapBoomerang_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapBoomerang.WeapBoomerang_C.UserConstructionScript
// ()

void AWeapBoomerang_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBoomerang.WeapBoomerang_C.UserConstructionScript");

	AWeapBoomerang_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapBoomerang.WeapBoomerang_C.ExecuteUbergraph_WeapBoomerang
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapBoomerang_C::ExecuteUbergraph_WeapBoomerang(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBoomerang.WeapBoomerang_C.ExecuteUbergraph_WeapBoomerang");

	AWeapBoomerang_C_ExecuteUbergraph_WeapBoomerang_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
