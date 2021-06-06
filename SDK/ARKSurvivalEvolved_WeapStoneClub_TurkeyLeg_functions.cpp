// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapStoneClub_TurkeyLeg_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapStoneClub_TurkeyLeg.WeapStoneClub_TurkeyLeg_C.UserConstructionScript
// ()

void AWeapStoneClub_TurkeyLeg_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapStoneClub_TurkeyLeg.WeapStoneClub_TurkeyLeg_C.UserConstructionScript");

	AWeapStoneClub_TurkeyLeg_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapStoneClub_TurkeyLeg.WeapStoneClub_TurkeyLeg_C.ExecuteUbergraph_WeapStoneClub_TurkeyLeg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapStoneClub_TurkeyLeg_C::ExecuteUbergraph_WeapStoneClub_TurkeyLeg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapStoneClub_TurkeyLeg.WeapStoneClub_TurkeyLeg_C.ExecuteUbergraph_WeapStoneClub_TurkeyLeg");

	AWeapStoneClub_TurkeyLeg_C_ExecuteUbergraph_WeapStoneClub_TurkeyLeg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
