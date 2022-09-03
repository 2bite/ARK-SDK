// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Carnivore_Medium_Manta_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Carnivore_Medium_Manta.DinoSettings_Carnivore_Medium_Manta_C.ExecuteUbergraph_DinoSettings_Carnivore_Medium_Manta
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Medium_Manta_C::ExecuteUbergraph_DinoSettings_Carnivore_Medium_Manta(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Medium_Manta.DinoSettings_Carnivore_Medium_Manta_C.ExecuteUbergraph_DinoSettings_Carnivore_Medium_Manta");

	UDinoSettings_Carnivore_Medium_Manta_C_ExecuteUbergraph_DinoSettings_Carnivore_Medium_Manta_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
