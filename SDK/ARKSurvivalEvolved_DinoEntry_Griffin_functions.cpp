// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Griffin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Griffin.DinoEntry_Griffin_C.ExecuteUbergraph_DinoEntry_Griffin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Griffin_C::ExecuteUbergraph_DinoEntry_Griffin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Griffin.DinoEntry_Griffin_C.ExecuteUbergraph_DinoEntry_Griffin");

	UDinoEntry_Griffin_C_ExecuteUbergraph_DinoEntry_Griffin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
