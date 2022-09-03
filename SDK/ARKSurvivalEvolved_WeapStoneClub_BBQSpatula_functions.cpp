// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapStoneClub_BBQSpatula_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapStoneClub_BBQSpatula.WeapStoneClub_BBQSpatula_C.UserConstructionScript
// ()

void AWeapStoneClub_BBQSpatula_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapStoneClub_BBQSpatula.WeapStoneClub_BBQSpatula_C.UserConstructionScript");

	AWeapStoneClub_BBQSpatula_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapStoneClub_BBQSpatula.WeapStoneClub_BBQSpatula_C.ExecuteUbergraph_WeapStoneClub_BBQSpatula
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapStoneClub_BBQSpatula_C::ExecuteUbergraph_WeapStoneClub_BBQSpatula(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapStoneClub_BBQSpatula.WeapStoneClub_BBQSpatula_C.ExecuteUbergraph_WeapStoneClub_BBQSpatula");

	AWeapStoneClub_BBQSpatula_C_ExecuteUbergraph_WeapStoneClub_BBQSpatula_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
