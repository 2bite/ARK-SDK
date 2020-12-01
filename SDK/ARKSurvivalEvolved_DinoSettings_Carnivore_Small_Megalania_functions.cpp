// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Carnivore_Small_Megalania_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Carnivore_Small_Megalania.DinoSettings_Carnivore_Small_Megalania_C.ExecuteUbergraph_DinoSettings_Carnivore_Small_Megalania
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Small_Megalania_C::ExecuteUbergraph_DinoSettings_Carnivore_Small_Megalania(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Small_Megalania.DinoSettings_Carnivore_Small_Megalania_C.ExecuteUbergraph_DinoSettings_Carnivore_Small_Megalania");

	UDinoSettings_Carnivore_Small_Megalania_C_ExecuteUbergraph_DinoSettings_Carnivore_Small_Megalania_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
