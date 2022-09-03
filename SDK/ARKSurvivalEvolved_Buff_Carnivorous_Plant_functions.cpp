// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Carnivorous_Plant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Carnivorous_Plant.Buff_Carnivorous_Plant_C.UserConstructionScript
// ()

void ABuff_Carnivorous_Plant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Carnivorous_Plant.Buff_Carnivorous_Plant_C.UserConstructionScript");

	ABuff_Carnivorous_Plant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Carnivorous_Plant.Buff_Carnivorous_Plant_C.ExecuteUbergraph_Buff_Carnivorous_Plant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Carnivorous_Plant_C::ExecuteUbergraph_Buff_Carnivorous_Plant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Carnivorous_Plant.Buff_Carnivorous_Plant_C.ExecuteUbergraph_Buff_Carnivorous_Plant");

	ABuff_Carnivorous_Plant_C_ExecuteUbergraph_Buff_Carnivorous_Plant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
