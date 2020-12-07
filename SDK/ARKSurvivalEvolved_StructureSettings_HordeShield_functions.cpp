// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSettings_HordeShield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureSettings_HordeShield.StructureSettings_HordeShield_C.ExecuteUbergraph_StructureSettings_HordeShield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStructureSettings_HordeShield_C::ExecuteUbergraph_StructureSettings_HordeShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureSettings_HordeShield.StructureSettings_HordeShield_C.ExecuteUbergraph_StructureSettings_HordeShield");

	UStructureSettings_HordeShield_C_ExecuteUbergraph_StructureSettings_HordeShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
