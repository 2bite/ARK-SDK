// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSettings_AutoTurret_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureSettings_AutoTurret.StructureSettings_AutoTurret_C.ExecuteUbergraph_StructureSettings_AutoTurret
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStructureSettings_AutoTurret_C::ExecuteUbergraph_StructureSettings_AutoTurret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureSettings_AutoTurret.StructureSettings_AutoTurret_C.ExecuteUbergraph_StructureSettings_AutoTurret");

	UStructureSettings_AutoTurret_C_ExecuteUbergraph_StructureSettings_AutoTurret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
