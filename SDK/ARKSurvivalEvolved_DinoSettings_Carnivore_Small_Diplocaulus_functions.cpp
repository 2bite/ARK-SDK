// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Carnivore_Small_Diplocaulus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Carnivore_Small_Diplocaulus.DinoSettings_Carnivore_Small_Diplocaulus_C.ExecuteUbergraph_DinoSettings_Carnivore_Small_Diplocaulus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Small_Diplocaulus_C::ExecuteUbergraph_DinoSettings_Carnivore_Small_Diplocaulus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Small_Diplocaulus.DinoSettings_Carnivore_Small_Diplocaulus_C.ExecuteUbergraph_DinoSettings_Carnivore_Small_Diplocaulus");

	UDinoSettings_Carnivore_Small_Diplocaulus_C_ExecuteUbergraph_DinoSettings_Carnivore_Small_Diplocaulus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
