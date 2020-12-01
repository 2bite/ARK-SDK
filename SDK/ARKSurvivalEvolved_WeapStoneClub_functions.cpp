// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapStoneClub_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapStoneClub.WeapStoneClub_C.UserConstructionScript
// ()

void AWeapStoneClub_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapStoneClub.WeapStoneClub_C.UserConstructionScript");

	AWeapStoneClub_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapStoneClub.WeapStoneClub_C.ExecuteUbergraph_WeapStoneClub
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapStoneClub_C::ExecuteUbergraph_WeapStoneClub(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapStoneClub.WeapStoneClub_C.ExecuteUbergraph_WeapStoneClub");

	AWeapStoneClub_C_ExecuteUbergraph_WeapStoneClub_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
