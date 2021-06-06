// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapStoneClube_Candy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapStoneClube_Candy.WeapStoneClube_Candy_C.UserConstructionScript
// ()

void AWeapStoneClube_Candy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapStoneClube_Candy.WeapStoneClube_Candy_C.UserConstructionScript");

	AWeapStoneClube_Candy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapStoneClube_Candy.WeapStoneClube_Candy_C.ExecuteUbergraph_WeapStoneClube_Candy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapStoneClube_Candy_C::ExecuteUbergraph_WeapStoneClube_Candy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapStoneClube_Candy.WeapStoneClube_Candy_C.ExecuteUbergraph_WeapStoneClube_Candy");

	AWeapStoneClube_Candy_C_ExecuteUbergraph_WeapStoneClube_Candy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
