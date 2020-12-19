// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Paracer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Paracer.DinoEntry_Paracer_C.ExecuteUbergraph_DinoEntry_Paracer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Paracer_C::ExecuteUbergraph_DinoEntry_Paracer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Paracer.DinoEntry_Paracer_C.ExecuteUbergraph_DinoEntry_Paracer");

	UDinoEntry_Paracer_C_ExecuteUbergraph_DinoEntry_Paracer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
