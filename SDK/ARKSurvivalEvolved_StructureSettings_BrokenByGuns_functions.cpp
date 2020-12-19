// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSettings_BrokenByGuns_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureSettings_BrokenByGuns.StructureSettings_BrokenByGuns_C.ExecuteUbergraph_StructureSettings_BrokenByGuns
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStructureSettings_BrokenByGuns_C::ExecuteUbergraph_StructureSettings_BrokenByGuns(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureSettings_BrokenByGuns.StructureSettings_BrokenByGuns_C.ExecuteUbergraph_StructureSettings_BrokenByGuns");

	UStructureSettings_BrokenByGuns_C_ExecuteUbergraph_StructureSettings_BrokenByGuns_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
