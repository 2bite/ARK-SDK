// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Herbivore_Medium_Camelsaurus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Herbivore_Medium_Camelsaurus.DinoSettings_Herbivore_Medium_Camelsaurus_C.ExecuteUbergraph_DinoSettings_Herbivore_Medium_Camelsaurus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Herbivore_Medium_Camelsaurus_C::ExecuteUbergraph_DinoSettings_Herbivore_Medium_Camelsaurus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Herbivore_Medium_Camelsaurus.DinoSettings_Herbivore_Medium_Camelsaurus_C.ExecuteUbergraph_DinoSettings_Herbivore_Medium_Camelsaurus");

	UDinoSettings_Herbivore_Medium_Camelsaurus_C_ExecuteUbergraph_DinoSettings_Herbivore_Medium_Camelsaurus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
