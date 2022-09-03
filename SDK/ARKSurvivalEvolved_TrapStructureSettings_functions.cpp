// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TrapStructureSettings_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TrapStructureSettings.TrapStructureSettings_C.ExecuteUbergraph_TrapStructureSettings
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTrapStructureSettings_C::ExecuteUbergraph_TrapStructureSettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrapStructureSettings.TrapStructureSettings_C.ExecuteUbergraph_TrapStructureSettings");

	UTrapStructureSettings_C_ExecuteUbergraph_TrapStructureSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
