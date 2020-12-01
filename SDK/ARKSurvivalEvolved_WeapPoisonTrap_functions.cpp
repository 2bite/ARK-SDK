// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapPoisonTrap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapPoisonTrap.WeapPoisonTrap_C.UserConstructionScript
// ()

void AWeapPoisonTrap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPoisonTrap.WeapPoisonTrap_C.UserConstructionScript");

	AWeapPoisonTrap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapPoisonTrap.WeapPoisonTrap_C.ExecuteUbergraph_WeapPoisonTrap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapPoisonTrap_C::ExecuteUbergraph_WeapPoisonTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPoisonTrap.WeapPoisonTrap_C.ExecuteUbergraph_WeapPoisonTrap");

	AWeapPoisonTrap_C_ExecuteUbergraph_WeapPoisonTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
