// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Carnivore_Tiny_Dilo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Carnivore_Tiny_Dilo.DinoSettings_Carnivore_Tiny_Dilo_C.ExecuteUbergraph_DinoSettings_Carnivore_Tiny_Dilo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Tiny_Dilo_C::ExecuteUbergraph_DinoSettings_Carnivore_Tiny_Dilo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Tiny_Dilo.DinoSettings_Carnivore_Tiny_Dilo_C.ExecuteUbergraph_DinoSettings_Carnivore_Tiny_Dilo");

	UDinoSettings_Carnivore_Tiny_Dilo_C_ExecuteUbergraph_DinoSettings_Carnivore_Tiny_Dilo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
