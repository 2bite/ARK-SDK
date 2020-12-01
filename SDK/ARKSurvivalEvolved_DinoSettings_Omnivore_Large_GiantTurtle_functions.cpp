// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Omnivore_Large_GiantTurtle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Omnivore_Large_GiantTurtle.DinoSettings_Omnivore_Large_GiantTurtle_C.ExecuteUbergraph_DinoSettings_Omnivore_Large_GiantTurtle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Omnivore_Large_GiantTurtle_C::ExecuteUbergraph_DinoSettings_Omnivore_Large_GiantTurtle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Omnivore_Large_GiantTurtle.DinoSettings_Omnivore_Large_GiantTurtle_C.ExecuteUbergraph_DinoSettings_Omnivore_Large_GiantTurtle");

	UDinoSettings_Omnivore_Large_GiantTurtle_C_ExecuteUbergraph_DinoSettings_Omnivore_Large_GiantTurtle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
