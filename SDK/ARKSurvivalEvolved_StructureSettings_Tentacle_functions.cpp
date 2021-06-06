// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSettings_Tentacle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureSettings_Tentacle.StructureSettings_Tentacle_C.ExecuteUbergraph_StructureSettings_Tentacle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStructureSettings_Tentacle_C::ExecuteUbergraph_StructureSettings_Tentacle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureSettings_Tentacle.StructureSettings_Tentacle_C.ExecuteUbergraph_StructureSettings_Tentacle");

	UStructureSettings_Tentacle_C_ExecuteUbergraph_StructureSettings_Tentacle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
