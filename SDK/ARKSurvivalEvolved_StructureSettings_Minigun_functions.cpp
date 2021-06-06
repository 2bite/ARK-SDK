// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSettings_Minigun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureSettings_Minigun.StructureSettings_Minigun_C.ExecuteUbergraph_StructureSettings_Minigun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStructureSettings_Minigun_C::ExecuteUbergraph_StructureSettings_Minigun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureSettings_Minigun.StructureSettings_Minigun_C.ExecuteUbergraph_StructureSettings_Minigun");

	UStructureSettings_Minigun_C_ExecuteUbergraph_StructureSettings_Minigun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
