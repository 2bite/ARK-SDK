// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapNetGunGen_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapNetGunGen.WeapNetGunGen_C.UserConstructionScript
// ()

void AWeapNetGunGen_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapNetGunGen.WeapNetGunGen_C.UserConstructionScript");

	AWeapNetGunGen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapNetGunGen.WeapNetGunGen_C.ExecuteUbergraph_WeapNetGunGen
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapNetGunGen_C::ExecuteUbergraph_WeapNetGunGen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapNetGunGen.WeapNetGunGen_C.ExecuteUbergraph_WeapNetGunGen");

	AWeapNetGunGen_C_ExecuteUbergraph_WeapNetGunGen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
