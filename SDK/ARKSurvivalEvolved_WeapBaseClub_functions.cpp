// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapBaseClub_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapBaseClub.WeapBaseClub_C.UserConstructionScript
// ()

void AWeapBaseClub_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBaseClub.WeapBaseClub_C.UserConstructionScript");

	AWeapBaseClub_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapBaseClub.WeapBaseClub_C.ExecuteUbergraph_WeapBaseClub
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapBaseClub_C::ExecuteUbergraph_WeapBaseClub(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBaseClub.WeapBaseClub_C.ExecuteUbergraph_WeapBaseClub");

	AWeapBaseClub_C_ExecuteUbergraph_WeapBaseClub_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
