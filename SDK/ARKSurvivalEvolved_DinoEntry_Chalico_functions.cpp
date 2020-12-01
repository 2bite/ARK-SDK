// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Chalico_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Chalico.DinoEntry_Chalico_C.ExecuteUbergraph_DinoEntry_Chalico
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Chalico_C::ExecuteUbergraph_DinoEntry_Chalico(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Chalico.DinoEntry_Chalico_C.ExecuteUbergraph_DinoEntry_Chalico");

	UDinoEntry_Chalico_C_ExecuteUbergraph_DinoEntry_Chalico_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
