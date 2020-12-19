// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureStatWidget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureStatWidget.StructureStatWidget_C.ExecuteUbergraph_StructureStatWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStructureStatWidget_C::ExecuteUbergraph_StructureStatWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureStatWidget.StructureStatWidget_C.ExecuteUbergraph_StructureStatWidget");

	UStructureStatWidget_C_ExecuteUbergraph_StructureStatWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
