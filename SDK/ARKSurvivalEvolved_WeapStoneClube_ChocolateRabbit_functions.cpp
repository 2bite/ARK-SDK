// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapStoneClube_ChocolateRabbit_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapStoneClube_ChocolateRabbit.WeapStoneClube_ChocolateRabbit_C.UserConstructionScript
// ()

void AWeapStoneClube_ChocolateRabbit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapStoneClube_ChocolateRabbit.WeapStoneClube_ChocolateRabbit_C.UserConstructionScript");

	AWeapStoneClube_ChocolateRabbit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapStoneClube_ChocolateRabbit.WeapStoneClube_ChocolateRabbit_C.ExecuteUbergraph_WeapStoneClube_ChocolateRabbit
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapStoneClube_ChocolateRabbit_C::ExecuteUbergraph_WeapStoneClube_ChocolateRabbit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapStoneClube_ChocolateRabbit.WeapStoneClube_ChocolateRabbit_C.ExecuteUbergraph_WeapStoneClube_ChocolateRabbit");

	AWeapStoneClube_ChocolateRabbit_C_ExecuteUbergraph_WeapStoneClube_ChocolateRabbit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
