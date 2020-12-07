// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Carnivore_Medium_CaveWolf_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Carnivore_Medium_CaveWolf.DinoSettings_Carnivore_Medium_CaveWolf_C.ExecuteUbergraph_DinoSettings_Carnivore_Medium_CaveWolf
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Medium_CaveWolf_C::ExecuteUbergraph_DinoSettings_Carnivore_Medium_CaveWolf(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Medium_CaveWolf.DinoSettings_Carnivore_Medium_CaveWolf_C.ExecuteUbergraph_DinoSettings_Carnivore_Medium_CaveWolf");

	UDinoSettings_Carnivore_Medium_CaveWolf_C_ExecuteUbergraph_DinoSettings_Carnivore_Medium_CaveWolf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
